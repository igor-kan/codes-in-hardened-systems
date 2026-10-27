"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1258."""

def spec_graphene_hardened_malloc_1258() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1258, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1258():
    s = spec_graphene_hardened_malloc_1258()
    assert s["spec_id"] == 1258
