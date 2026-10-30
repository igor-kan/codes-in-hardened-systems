"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1432."""

def spec_graphene_hardened_malloc_1432() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1432, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1432():
    s = spec_graphene_hardened_malloc_1432()
    assert s["spec_id"] == 1432
