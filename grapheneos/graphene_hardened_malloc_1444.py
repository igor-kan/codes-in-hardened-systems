"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1444."""

def spec_graphene_hardened_malloc_1444() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1444, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1444():
    s = spec_graphene_hardened_malloc_1444()
    assert s["spec_id"] == 1444
