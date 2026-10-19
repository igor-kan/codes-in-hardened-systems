"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 730."""

def spec_graphene_hardened_malloc_730() -> dict:
    return {"system": "GrapheneOS", "spec_id": 730, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_730():
    s = spec_graphene_hardened_malloc_730()
    assert s["spec_id"] == 730
