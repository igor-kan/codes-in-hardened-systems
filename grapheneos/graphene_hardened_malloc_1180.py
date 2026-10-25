"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1180."""

def spec_graphene_hardened_malloc_1180() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1180, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1180():
    s = spec_graphene_hardened_malloc_1180()
    assert s["spec_id"] == 1180
