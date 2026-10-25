"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1198."""

def spec_graphene_hardened_malloc_1198() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1198, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1198():
    s = spec_graphene_hardened_malloc_1198()
    assert s["spec_id"] == 1198
