"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1480."""

def spec_graphene_hardened_malloc_1480() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1480, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1480():
    s = spec_graphene_hardened_malloc_1480()
    assert s["spec_id"] == 1480
