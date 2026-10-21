"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 904."""

def spec_graphene_hardened_malloc_904() -> dict:
    return {"system": "GrapheneOS", "spec_id": 904, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_904():
    s = spec_graphene_hardened_malloc_904()
    assert s["spec_id"] == 904
