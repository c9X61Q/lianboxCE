// gettime.exe @ 0x416f0f size=85

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_6affb1475c98b40b75cdec977db92e3c_,_lambda_b8d4b9c228a6ecc3f80208dbb4b4a104_ &,_lambda_608742c3c92a14382c1684fc64f96c88_>(
        int *a1,
        struct __acrt_ptd *const **a2,
        int *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(**a2, nullptr);
  __acrt_unlock(*a3);
}

