"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 238."""

def spec_graphene_hardened_malloc_238() -> dict:
    return {"system": "GrapheneOS", "spec_id": 238, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_238():
    s = spec_graphene_hardened_malloc_238()
    assert s["spec_id"] == 238
