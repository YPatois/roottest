void print_dict() {
    TFile *_file = TFile::Open("local/lib64/libDictExample_rdict.pcm","READ");
    _file->ls();
}

