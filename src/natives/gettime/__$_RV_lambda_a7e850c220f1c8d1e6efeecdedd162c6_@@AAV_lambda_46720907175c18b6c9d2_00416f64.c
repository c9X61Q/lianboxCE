// gettime.exe @ 0x416f64 size=90

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_a7e850c220f1c8d1e6efeecdedd162c6_,_lambda_46720907175c18b6c9d2717bc0d2d362_ &,_lambda_9048902d66e8d99359bc9897bbb930a8_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(
    **(struct __acrt_ptd *const **)a2,
    ***(struct __crt_locale_data *const ***)(a2 + 4));
  __acrt_unlock(*a3);
}

