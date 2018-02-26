
namespace ebpf {

class ObjLoader {
 public:
  explicit ObjLoader();
  ~ObjLoader();
  int parse();
};

}  // namespace ebpf
