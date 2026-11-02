"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1564."""

def spec_graphene_hardened_malloc_1564() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1564, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1564():
    s = spec_graphene_hardened_malloc_1564()
    assert s["spec_id"] == 1564
