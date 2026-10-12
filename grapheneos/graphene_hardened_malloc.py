"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 28."""

def spec_graphene_hardened_malloc_28() -> dict:
    return {"system": "GrapheneOS", "spec_id": 28, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_28():
    s = spec_graphene_hardened_malloc_28()
    assert s["spec_id"] == 28
