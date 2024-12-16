#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/eigen.h>
#include "Manifold.h"

// Example from https://stackoverflow.com/questions/56297728/returning-a-list-or-tuple-of-arrays-from-pybind11-wrapping-eigen
// std::vector<Eigen::MatrixXd> 
// test2(Eigen::Ref<const Eigen::MatrixXd> x, Eigen::Ref<const Eigen::VectorXd> as){
//     std::vector<Eigen::MatrixXd> matrices;
//     for(unsigned int k = 0; k < as.size(); k++){
//         Eigen::MatrixXd ys = x * as[k];
//         matrices.push_back(ys);
//     }
//     return matrices;
// }

// namespace py = pybind11;

// PYBIND11_MODULE(test, m){
//     m.doc() = "minimal working example";
//     m.def("test2", &test2);
// }


// namespace py = pybind11;

// PYBIND11_MODULE(manifold, m) {
//     py::class_<Manifold>(m, "Manifold")
//     .def(py::init<>())
//     .def("process_manifold", &Manifold::ProcessManifold);
// }

