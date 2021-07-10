#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Engine 
{
	class EG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

/*
 * ----------------------------------------------------------------------------
 *								CORE LOG MACROS
 * ----------------------------------------------------------------------------
 */
#define EG_CORE_ERROR(...)		::Engine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EG_CORE_TRACE(...)		::Engine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EG_CORE_FATAL(...)		::Engine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define EG_CORE_INFO(...)		::Engine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EG_CORE_WARN(...)	    ::Engine::Log::GetCoreLogger()->warn(__VA_ARGS__)

 /*
  * --------------------------------------------------------------------------
  *								CLIENT LOG MACROS
  * --------------------------------------------------------------------------
  */
#define EG_CLIENT_ERROR(...)	::Engine::Log::GetClientLogger()->error(__VA_ARGS__)
#define EG_CLIENT_TRACE(...)	::Engine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EG_CLIENT_FATAL(...)    ::Engine::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define EG_CLIENT_INFO(...)		::Engine::Log::GetClientLogger()->info(__VA_ARGS__)
#define EG_CLIENT_WARN(...)		::Engine::Log::GetClientLogger()->warn(__VA_ARGS__)
