"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1312."""

def spec_graphene_hardened_malloc_1312() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1312, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1312():
    s = spec_graphene_hardened_malloc_1312()
    assert s["spec_id"] == 1312
