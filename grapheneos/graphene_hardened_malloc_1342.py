"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1342."""

def spec_graphene_hardened_malloc_1342() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1342, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1342():
    s = spec_graphene_hardened_malloc_1342()
    assert s["spec_id"] == 1342
