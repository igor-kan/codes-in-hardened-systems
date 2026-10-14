"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 226."""

def spec_graphene_hardened_malloc_226() -> dict:
    return {"system": "GrapheneOS", "spec_id": 226, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_226():
    s = spec_graphene_hardened_malloc_226()
    assert s["spec_id"] == 226
