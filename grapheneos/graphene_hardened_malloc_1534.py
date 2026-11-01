"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1534."""

def spec_graphene_hardened_malloc_1534() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1534, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1534():
    s = spec_graphene_hardened_malloc_1534()
    assert s["spec_id"] == 1534
