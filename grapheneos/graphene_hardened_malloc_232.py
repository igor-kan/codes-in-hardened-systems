"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 232."""

def spec_graphene_hardened_malloc_232() -> dict:
    return {"system": "GrapheneOS", "spec_id": 232, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_232():
    s = spec_graphene_hardened_malloc_232()
    assert s["spec_id"] == 232
