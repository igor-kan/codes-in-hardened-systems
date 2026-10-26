"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1234."""

def spec_graphene_hardened_malloc_1234() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1234, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1234():
    s = spec_graphene_hardened_malloc_1234()
    assert s["spec_id"] == 1234
