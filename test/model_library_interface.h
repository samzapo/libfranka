#pragma once

struct ModelLibraryInterface {
  virtual ~ModelLibraryInterface() {}
  virtual void M_NE(const double q[7],
                    const double I_load[9],
                    double m_load,
                    const double F_x_Cload[3],
                    double M_NE[49]) = 0;
  virtual void O_T_J1(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J1[16]) = 0;
  virtual void O_T_J2(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J2[16]) = 0;
  virtual void O_T_J3(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J3[16]) = 0;
  virtual void O_T_J4(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J4[16]) = 0;
  virtual void O_T_J5(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J5[16]) = 0;
  virtual void O_T_J6(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J6[16]) = 0;
  virtual void O_T_J7(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J7[16]) = 0;
  virtual void O_T_J8(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J8[16]) = 0;
  virtual void O_T_J9(const double q[7],
                      const double F_T_EE[16],
                      double O_T_J9[16]) = 0;
  virtual void c_NE(const double q[7],
                    const double dq[7],
                    const double I_load[9],
                    double m_load,
                    const double F_x_Cload[3],
                    double c_NE[7]) = 0;
  virtual void g_NE(const double q[7],
                    const double g_earth[3],
                    double m_load,
                    const double F_x_Cload[3],
                    double g_NE[7]) = 0;
};

extern ModelLibraryInterface* model_library_interface;
