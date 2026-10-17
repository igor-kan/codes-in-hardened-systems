"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 502."""

def spec_graphene_hardened_malloc_502() -> dict:
    return {"system": "GrapheneOS", "spec_id": 502, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_502():
    s = spec_graphene_hardened_malloc_502()
    assert s["spec_id"] == 502
