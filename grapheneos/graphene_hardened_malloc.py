"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 70."""

def spec_graphene_hardened_malloc_70() -> dict:
    return {"system": "GrapheneOS", "spec_id": 70, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_70():
    s = spec_graphene_hardened_malloc_70()
    assert s["spec_id"] == 70
