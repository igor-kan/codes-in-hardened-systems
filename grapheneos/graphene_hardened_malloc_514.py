"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 514."""

def spec_graphene_hardened_malloc_514() -> dict:
    return {"system": "GrapheneOS", "spec_id": 514, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_514():
    s = spec_graphene_hardened_malloc_514()
    assert s["spec_id"] == 514
