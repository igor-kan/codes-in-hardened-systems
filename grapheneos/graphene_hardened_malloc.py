"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 64."""

def spec_graphene_hardened_malloc_64() -> dict:
    return {"system": "GrapheneOS", "spec_id": 64, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_64():
    s = spec_graphene_hardened_malloc_64()
    assert s["spec_id"] == 64
