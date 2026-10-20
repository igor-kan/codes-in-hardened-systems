"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 844."""

def spec_graphene_hardened_malloc_844() -> dict:
    return {"system": "GrapheneOS", "spec_id": 844, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_844():
    s = spec_graphene_hardened_malloc_844()
    assert s["spec_id"] == 844
