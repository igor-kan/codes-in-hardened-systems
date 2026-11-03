"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1642."""

def spec_graphene_hardened_malloc_1642() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1642, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1642():
    s = spec_graphene_hardened_malloc_1642()
    assert s["spec_id"] == 1642
