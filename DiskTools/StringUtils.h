#pragma once

namespace DiskTools
{

void pretty_print32(uint32_t value, _Out_writes_z_(size_in_chars) PTSTR output_string, _In_range_(0, INT_MAX) size_t size_in_chars);
void pretty_print64(uint64_t value, _Out_writes_z_(size_in_chars) PTSTR output_string, _In_range_(0, INT_MAX) size_t size_in_chars);

}

