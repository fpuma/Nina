namespace Puma
{
    [Sharpmake.Generate]
    class Nina : Puma.SharpmakeBase.IStaticLibrary
    {
        public Nina()
            : base("Nina", @"nina")
        { }

        public override void ConfigureAll(Configuration conf, Sharpmake.Target target)
        {
            base.ConfigureAll(conf, target);

            conf.AddPrivateDependency<Export.SDL>(target);
            conf.AddPrivateDependency<Export.SDLImage>(target);
            conf.AddPrivateDependency<Export.SDLTtf>(target);
            conf.AddPrivateDependency<Export.SDLgfx>(target);
            conf.AddPublicDependency<Puma.Utils>(target);
            conf.AddPublicDependency<Puma.Logger>(target);

            conf.IncludePrivatePaths.Add(@"\private");
            conf.IncludePaths.Add(@"\public");
            conf.IncludePaths.Add(@"\shared");

            conf.PrecompHeader = @"precompiledapplication.h";
            conf.PrecompSource = @"precompiledapplication.cpp";

            conf.Options.Add(Sharpmake.Options.Vc.General.TreatWarningsAsErrors.Enable);
        }
    }
}