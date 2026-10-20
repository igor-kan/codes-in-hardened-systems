"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 850."""

def spec_graphene_hardened_malloc_850() -> dict:
    return {"system": "GrapheneOS", "spec_id": 850, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_850():
    s = spec_graphene_hardened_malloc_850()
    assert s["spec_id"] == 850
