R__ADD_INCLUDE_PATH(local/include)
R__ADD_LIBRARY_PATH(local/lib64)
R__LOAD_LIBRARY(libDictExample.so) 
void CheckLoad() {
//gSystem->Load("libDictExample");
Simple s;
cout << s.GetX() << endl;
TFile *_file = TFile::Open("tmp.root", "RECREATE");
gDirectory->WriteObject(&s, "MyS");
Simple *MyS = nullptr;
gDirectory->GetObject("MyS", MyS);
cout << MyS->GetX() << endl;
_file->Close();
}
