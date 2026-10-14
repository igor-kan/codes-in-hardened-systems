"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 220."""

def spec_graphene_hardened_malloc_220() -> dict:
    return {"system": "GrapheneOS", "spec_id": 220, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_220():
    s = spec_graphene_hardened_malloc_220()
    assert s["spec_id"] == 220
