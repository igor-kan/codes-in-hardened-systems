"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 118."""

def spec_graphene_hardened_malloc_118() -> dict:
    return {"system": "GrapheneOS", "spec_id": 118, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_118():
    s = spec_graphene_hardened_malloc_118()
    assert s["spec_id"] == 118
