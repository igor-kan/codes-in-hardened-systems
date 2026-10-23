"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1024."""

def spec_graphene_hardened_malloc_1024() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1024, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1024():
    s = spec_graphene_hardened_malloc_1024()
    assert s["spec_id"] == 1024
