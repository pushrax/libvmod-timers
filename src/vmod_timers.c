#include "vrt.h"
#include "cache/cache.h"
#include "vcc_if.h"

// Returns the end of request reading, which is the start of request processing.
VCL_REAL vmod_req_start(const struct vrt_ctx *ctx, struct vmod_priv *priv) {
	return ctx->req->t_req;
}
