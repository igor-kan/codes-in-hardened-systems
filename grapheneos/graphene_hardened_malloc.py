"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 112."""

def spec_graphene_hardened_malloc_112() -> dict:
    return {"system": "GrapheneOS", "spec_id": 112, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_112():
    s = spec_graphene_hardened_malloc_112()
    assert s["spec_id"] == 112
