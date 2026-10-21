"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 940."""

def spec_graphene_hardened_malloc_940() -> dict:
    return {"system": "GrapheneOS", "spec_id": 940, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_940():
    s = spec_graphene_hardened_malloc_940()
    assert s["spec_id"] == 940
