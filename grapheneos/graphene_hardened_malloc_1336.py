"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1336."""

def spec_graphene_hardened_malloc_1336() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1336, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1336():
    s = spec_graphene_hardened_malloc_1336()
    assert s["spec_id"] == 1336
