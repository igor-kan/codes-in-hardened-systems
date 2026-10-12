"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 52."""

def spec_graphene_hardened_malloc_52() -> dict:
    return {"system": "GrapheneOS", "spec_id": 52, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_52():
    s = spec_graphene_hardened_malloc_52()
    assert s["spec_id"] == 52
