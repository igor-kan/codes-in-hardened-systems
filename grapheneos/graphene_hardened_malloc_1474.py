"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1474."""

def spec_graphene_hardened_malloc_1474() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1474, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1474():
    s = spec_graphene_hardened_malloc_1474()
    assert s["spec_id"] == 1474
