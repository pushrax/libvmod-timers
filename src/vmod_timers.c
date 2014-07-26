#include "vrt.h"
#include "cache/cache.h"
#include "vcc_if.h"

VCL_REAL vmod_req_start(const struct vrt_ctx *ctx, struct vmod_priv *priv) {
	return ctx->req->t_req;
}
