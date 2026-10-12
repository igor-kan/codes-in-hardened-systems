"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 22."""

def spec_graphene_hardened_malloc_22() -> dict:
    return {"system": "GrapheneOS", "spec_id": 22, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_22():
    s = spec_graphene_hardened_malloc_22()
    assert s["spec_id"] == 22
