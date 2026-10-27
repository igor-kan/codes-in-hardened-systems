"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1264."""

def spec_graphene_hardened_malloc_1264() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1264, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1264():
    s = spec_graphene_hardened_malloc_1264()
    assert s["spec_id"] == 1264
