
#ifndef VTKCOMMONEXECUTIONMODEL_EXPORT_H
#define VTKCOMMONEXECUTIONMODEL_EXPORT_H

#ifdef VTKCOMMONEXECUTIONMODEL_STATIC_DEFINE
#  define VTKCOMMONEXECUTIONMODEL_EXPORT
#  define VTKCOMMONEXECUTIONMODEL_NO_EXPORT
#else
#  ifndef VTKCOMMONEXECUTIONMODEL_EXPORT
#    ifdef vtkCommonExecutionModel_EXPORTS
        /* We are building this library */
#      define VTKCOMMONEXECUTIONMODEL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKCOMMONEXECUTIONMODEL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKCOMMONEXECUTIONMODEL_NO_EXPORT
#    define VTKCOMMONEXECUTIONMODEL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKCOMMONEXECUTIONMODEL_DEPRECATED
#  define VTKCOMMONEXECUTIONMODEL_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKCOMMONEXECUTIONMODEL_DEPRECATED_EXPORT VTKCOMMONEXECUTIONMODEL_EXPORT __attribute__ ((__deprecated__))
#  define VTKCOMMONEXECUTIONMODEL_DEPRECATED_NO_EXPORT VTKCOMMONEXECUTIONMODEL_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKCOMMONEXECUTIONMODEL_NO_DEPRECATED
#endif



#endif
