#include <micrortps/client/core/session/input_best_effort_stream.h>

//==================================================================
//                             PUBLIC
//==================================================================
void init_input_best_effort_stream(InputBestEffortStream* stream)
{
    stream->last_handled = UINT16_MAX;
}

bool receive_best_effort_message(InputBestEffortStream* stream, uint16_t seq_num)
{
    bool available_to_read = (0 > seq_num_cmp(stream->last_handled, seq_num));
    if(available_to_read)
    {
        stream->last_handled = seq_num;
    }

    return available_to_read;
}