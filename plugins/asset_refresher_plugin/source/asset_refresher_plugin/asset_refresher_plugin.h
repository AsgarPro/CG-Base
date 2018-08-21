#pragma once

using namespace System;

__declspec(dllexport) void plugin_start()
{

}

__declspec(dllexport) void refresh_assets(const char* path_to_assets_log)
{
	String^ clistr = gcnew String(path_to_assets_log);
	AssetsRefresherPluginImpl::AssetsRefresher::RefreshAssets(clistr);
	
}

__declspec(dllexport) void plugin_end()
{
	AssetsRefresherPluginImpl::AssetsRefresher::Cleanup();
}

