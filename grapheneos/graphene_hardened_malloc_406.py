"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 406."""

def spec_graphene_hardened_malloc_406() -> dict:
    return {"system": "GrapheneOS", "spec_id": 406, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_406():
    s = spec_graphene_hardened_malloc_406()
    assert s["spec_id"] == 406
