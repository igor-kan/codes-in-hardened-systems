"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 808."""

def spec_graphene_hardened_malloc_808() -> dict:
    return {"system": "GrapheneOS", "spec_id": 808, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_808():
    s = spec_graphene_hardened_malloc_808()
    assert s["spec_id"] == 808
