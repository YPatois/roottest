void print_dict() {
  TFile *_file = TFile::Open("local/lib64/libDictExample_rdict.pcm", "READ");
  _file->ls();

  std::cout << "___________________________________" << std::endl;
  TIter it(_file->GetListOfKeys());
  TKey *o;
  while ((o = (TKey *)it())) {
    std::cout << " ---------- " << std::endl;
    o->Dump();
    TProtoClass *o2 = (TProtoClass *)o->ReadObj();
    o2->Dump();
    //std::cout << o2->fName << std::endl;
    /*TIter it2(o->GetListOfKeys());
     TObject *o2;
     while ((o2 = (TKey *)it2())) {
       o2->Print();
     }*/
  }
}
