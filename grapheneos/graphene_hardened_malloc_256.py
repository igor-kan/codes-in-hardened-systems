"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 256."""

def spec_graphene_hardened_malloc_256() -> dict:
    return {"system": "GrapheneOS", "spec_id": 256, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_256():
    s = spec_graphene_hardened_malloc_256()
    assert s["spec_id"] == 256
