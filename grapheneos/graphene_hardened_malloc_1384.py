"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1384."""

def spec_graphene_hardened_malloc_1384() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1384, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1384():
    s = spec_graphene_hardened_malloc_1384()
    assert s["spec_id"] == 1384
