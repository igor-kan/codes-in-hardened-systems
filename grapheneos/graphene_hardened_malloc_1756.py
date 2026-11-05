"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1756."""

def spec_graphene_hardened_malloc_1756() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1756, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1756():
    s = spec_graphene_hardened_malloc_1756()
    assert s["spec_id"] == 1756
